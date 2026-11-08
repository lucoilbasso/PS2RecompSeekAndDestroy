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

// Function: entry_001654dc
// Address: 0x1654dc - 0x16551c
void entry_001654dc_0x1654dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001654dc_0x1654dc");
#endif

    switch (ctx->pc) {
        case 0x165504u: goto label_165504;
        default: break;
    }

    ctx->pc = 0x1654dcu;

label_1654dc:
    // 0x1654dc: 0x8e021234  lw          $v0, 0x1234($s0)
    ctx->pc = 0x1654dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
label_1654e0:
    // 0x1654e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1654e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1654e4:
    // 0x1654e4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1654e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1654e8:
    // 0x1654e8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1654e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1654ec:
    // 0x1654ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1654ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1654f0:
    // 0x1654f0: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1654f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1654f4:
    // 0x1654f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1654f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1654f8:
    // 0x1654f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1654f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1654fc:
    // 0x1654fc: 0x60f809  jalr        $v1
label_165500:
    if (ctx->pc == 0x165500u) {
        ctx->pc = 0x165500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654FCu;
        // 0x165500: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165504u;
        goto label_165504;
    }
    ctx->pc = 0x1654FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165504u);
        ctx->pc = 0x165500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654FCu;
        // 0x165500: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1654FCu, 0x165504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165504u;
label_165504:
    // 0x165504: 0x8e041234  lw          $a0, 0x1234($s0)
    ctx->pc = 0x165504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
label_165508:
    // 0x165508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16550c:
    // 0x16550c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16550cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165510:
    // 0x165510: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x165510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_165514:
    // 0x165514: 0xc0618da  jal         func_186368
label_165518:
    if (ctx->pc == 0x165518u) {
        ctx->pc = 0x165518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165514u;
        // 0x165518: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16551Cu;
        goto label_fallthrough_0x165514;
    }
    ctx->pc = 0x165514u;
    SET_GPR_U32(ctx, 31, 0x16551Cu);
    ctx->pc = 0x165518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165514u;
    // 0x165518: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x165514u, 0x16551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x165514:
    ctx->pc = 0x16551Cu;
}
