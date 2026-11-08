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

// Function: entry_00181024
// Address: 0x181024 - 0x181068
void entry_00181024_0x181024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181024_0x181024");
#endif

    ctx->pc = 0x181024u;

    // 0x181024: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x181024u;
    {
        const bool branch_taken_0x181024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181024u;
        // 0x181028: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181024) {
            ctx->pc = 0x181068u;
            return;
        }
    }
    ctx->pc = 0x18102Cu;
    // 0x18102c: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x18102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x181030: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x181030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181034: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x181034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181038: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x181038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18103c: 0xade4001c  sw          $a0, 0x1C($t7)
    ctx->pc = 0x18103cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 4));
    // 0x181040: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x181040u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x181044: 0xade20020  sw          $v0, 0x20($t7)
    ctx->pc = 0x181044u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 2));
    // 0x181048: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x181048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x18104c: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x18104cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x181050: 0xe5e2000c  swc1        $f2, 0xC($t7)
    ctx->pc = 0x181050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x181054: 0xade50010  sw          $a1, 0x10($t7)
    ctx->pc = 0x181054u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 5));
    // 0x181058: 0xade60014  sw          $a2, 0x14($t7)
    ctx->pc = 0x181058u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 6));
    // 0x18105c: 0xadea0018  sw          $t2, 0x18($t7)
    ctx->pc = 0x18105cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 10));
    // 0x181060: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x181060u;
    {
        const bool branch_taken_0x181060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181060u;
        // 0x181064: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181060) {
            ctx->pc = 0x181384u;
            return;
        }
    }
    ctx->pc = 0x181068u;
}
