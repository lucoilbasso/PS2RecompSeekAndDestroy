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

// Function: entry_00180cc0
// Address: 0x180cc0 - 0x180cfc
void entry_00180cc0_0x180cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180cc0_0x180cc0");
#endif

    ctx->pc = 0x180cc0u;

    // 0x180cc0: 0x9183000c  lbu         $v1, 0xC($t4)
    ctx->pc = 0x180cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x180cc4: 0x311c2  srl         $v0, $v1, 7
    ctx->pc = 0x180cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x180cc8: 0x544001b3  bnel        $v0, $zero, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x180CC8u;
    {
        const bool branch_taken_0x180cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180cc8) {
            ctx->pc = 0x180CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180CC8u;
            // 0x180ccc: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181398u;
            return;
        }
    }
    ctx->pc = 0x180CD0u;
    // 0x180cd0: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x180cd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x180cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x180cd8: 0x504001af  beql        $v0, $zero, . + 4 + (0x1AF << 2)
    ctx->pc = 0x180CD8u;
    {
        const bool branch_taken_0x180cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180cd8) {
            ctx->pc = 0x180CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180CD8u;
            // 0x180cdc: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181398u;
            return;
        }
    }
    ctx->pc = 0x180CE0u;
    // 0x180ce0: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x180ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ce4: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x180ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180ce8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180ce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180cec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180cf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x180CF0u;
    {
        const bool branch_taken_0x180cf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CF0u;
        // 0x180cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cf0) {
            ctx->pc = 0x180CFCu;
            return;
        }
    }
    ctx->pc = 0x180CF8u;
    // 0x180cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x180cfcu;
}
