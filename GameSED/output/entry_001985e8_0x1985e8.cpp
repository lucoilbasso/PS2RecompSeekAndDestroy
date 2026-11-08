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

// Function: entry_001985e8
// Address: 0x1985e8 - 0x198614
void entry_001985e8_0x1985e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001985e8_0x1985e8");
#endif

    switch (ctx->pc) {
        case 0x1985f0u: goto label_1985f0;
        case 0x198610u: goto label_198610;
        default: break;
    }

    ctx->pc = 0x1985e8u;

    // 0x1985e8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1985E8u;
    SET_GPR_U32(ctx, 31, 0x1985F0u);
    ctx->pc = 0x1985ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1985E8u;
    // 0x1985ec: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1985E8u, 0x1985F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1985F0u;
label_1985f0:
    // 0x1985f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1985f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985f4: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1985F4u;
    {
        const bool branch_taken_0x1985f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1985f4) {
            ctx->pc = 0x1985F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1985F4u;
            // 0x1985f8: 0xaed00004  sw          $s0, 0x4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198614u;
            return;
        }
    }
    ctx->pc = 0x1985FCu;
    // 0x1985fc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1985fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x198600: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198604: 0x24a583f0  addiu       $a1, $a1, -0x7C10
    ctx->pc = 0x198604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935536));
    // 0x198608: 0xc068186  jal         func_1A0618
    ctx->pc = 0x198608u;
    SET_GPR_U32(ctx, 31, 0x198610u);
    ctx->pc = 0x19860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198608u;
    // 0x19860c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x198608u, 0x198610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198610u;
label_198610:
    // 0x198610: 0xaed00004  sw          $s0, 0x4($s6)
    ctx->pc = 0x198610u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x198614u;
}
