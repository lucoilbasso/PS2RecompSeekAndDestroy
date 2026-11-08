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

// Function: entry_00196568
// Address: 0x196568 - 0x1965b0
void entry_00196568_0x196568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196568_0x196568");
#endif

    switch (ctx->pc) {
        case 0x196570u: goto label_196570;
        case 0x19658cu: goto label_19658c;
        case 0x1965acu: goto label_1965ac;
        default: break;
    }

    ctx->pc = 0x196568u;

    // 0x196568: 0xc068086  jal         func_1A0218
    ctx->pc = 0x196568u;
    SET_GPR_U32(ctx, 31, 0x196570u);
    ctx->pc = 0x19656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196568u;
    // 0x19656c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x196568u, 0x196570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196570u;
label_196570:
    // 0x196570: 0x1040ff71  beqz        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x196570u;
    {
        const bool branch_taken_0x196570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196570u;
        // 0x196574: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196570) {
            ctx->pc = 0x196338u;
            return;
        }
    }
    ctx->pc = 0x196578u;
    // 0x196578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19657c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x19657cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x196580: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x196580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x196584: 0xc065dcc  jal         func_197730
    ctx->pc = 0x196584u;
    SET_GPR_U32(ctx, 31, 0x19658Cu);
    ctx->pc = 0x196588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196584u;
    // 0x196588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197730u, 0x196584u, 0x19658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19658Cu;
label_19658c:
    // 0x19658c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x19658cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196590: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x196590u;
    {
        const bool branch_taken_0x196590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196590) {
            ctx->pc = 0x196594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196590u;
            // 0x196594: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1965B0u;
            return;
        }
    }
    ctx->pc = 0x196598u;
    // 0x196598: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x196598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19659c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19659cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965a0: 0x24a58338  addiu       $a1, $a1, -0x7CC8
    ctx->pc = 0x1965a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
    // 0x1965a4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1965A4u;
    SET_GPR_U32(ctx, 31, 0x1965ACu);
    ctx->pc = 0x1965A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1965A4u;
    // 0x1965a8: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1965A4u, 0x1965ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965ACu;
label_1965ac:
    // 0x1965ac: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1965acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->pc = 0x1965b0u;
}
