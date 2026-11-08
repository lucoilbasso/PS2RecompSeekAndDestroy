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

// Function: entry_00171d90
// Address: 0x171d90 - 0x171de0
void entry_00171d90_0x171d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171d90_0x171d90");
#endif

    switch (ctx->pc) {
        case 0x171db4u: goto label_171db4;
        case 0x171dc4u: goto label_171dc4;
        case 0x171dd8u: goto label_171dd8;
        default: break;
    }

    ctx->pc = 0x171d90u;

    // 0x171d90: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x171d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x171d94: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x171d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d98: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x171D98u;
    {
        const bool branch_taken_0x171d98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x171D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D98u;
        // 0x171d9c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d98) {
            ctx->pc = 0x171E3Cu;
            return;
        }
    }
    ctx->pc = 0x171DA0u;
    // 0x171da0: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x171DA0u;
    {
        const bool branch_taken_0x171da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171da0) {
            ctx->pc = 0x171DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171DA0u;
            // 0x171da4: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171DE0u;
            return;
        }
    }
    ctx->pc = 0x171DA8u;
    // 0x171da8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171dac: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171DACu;
    SET_GPR_U32(ctx, 31, 0x171DB4u);
    ctx->pc = 0x171DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DACu;
    // 0x171db0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171DACu, 0x171DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DB4u;
label_171db4:
    // 0x171db4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x171db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171db8: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x171db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x171dbc: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171DBCu;
    SET_GPR_U32(ctx, 31, 0x171DC4u);
    ctx->pc = 0x171DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DBCu;
    // 0x171dc0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171DBCu, 0x171DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DC4u;
label_171dc4:
    // 0x171dc4: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x171dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x171dc8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x171dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x171dcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171dd0: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171DD0u;
    SET_GPR_U32(ctx, 31, 0x171DD8u);
    ctx->pc = 0x171DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DD0u;
    // 0x171dd4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171DD0u, 0x171DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DD8u;
label_171dd8:
    // 0x171dd8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x171DD8u;
    {
        const bool branch_taken_0x171dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DD8u;
        // 0x171ddc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171dd8) {
            ctx->pc = 0x171E3Cu;
            return;
        }
    }
    ctx->pc = 0x171DE0u;
}
