#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00181fe8
// Address: 0x181fe8 - 0x182030
void entry_00181fe8_0x181fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181fe8_0x181fe8");
#endif

    ctx->pc = 0x181fe8u;

    // 0x181fe8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x181FE8u;
    {
        const bool branch_taken_0x181fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fe8) {
            ctx->pc = 0x181FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181FE8u;
            // 0x181fec: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            return;
        }
    }
    ctx->pc = 0x181FF0u;
    // 0x181ff0: 0x11e00025  beqz        $t7, . + 4 + (0x25 << 2)
    ctx->pc = 0x181FF0u;
    {
        const bool branch_taken_0x181ff0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x181FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FF0u;
        // 0x181ff4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ff0) {
            ctx->pc = 0x182088u;
            return;
        }
    }
    ctx->pc = 0x181FF8u;
    // 0x181ff8: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x181ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x181ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182000: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x182000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182004: 0xaf26001c  sw          $a2, 0x1C($t9)
    ctx->pc = 0x182004u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 28), GPR_U32(ctx, 6));
    // 0x182008: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x182008u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x18200c: 0xaf230020  sw          $v1, 0x20($t9)
    ctx->pc = 0x18200cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 32), GPR_U32(ctx, 3));
    // 0x182010: 0xe7200004  swc1        $f0, 0x4($t9)
    ctx->pc = 0x182010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4), bits); }
    // 0x182014: 0xe7290008  swc1        $f9, 0x8($t9)
    ctx->pc = 0x182014u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 8), bits); }
    // 0x182018: 0xe721000c  swc1        $f1, 0xC($t9)
    ctx->pc = 0x182018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 12), bits); }
    // 0x18201c: 0xaf2a0010  sw          $t2, 0x10($t9)
    ctx->pc = 0x18201cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 10));
    // 0x182020: 0xaf280018  sw          $t0, 0x18($t9)
    ctx->pc = 0x182020u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 24), GPR_U32(ctx, 8));
    // 0x182024: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x182024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x182028: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x182028u;
    {
        const bool branch_taken_0x182028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182028u;
        // 0x18202c: 0xaf280014  sw          $t0, 0x14($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182028) {
            ctx->pc = 0x182108u;
            return;
        }
    }
    ctx->pc = 0x182030u;
}
