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

// Function: entry_00163ef4
// Address: 0x163ef4 - 0x163f20
void entry_00163ef4_0x163ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163ef4_0x163ef4");
#endif

    switch (ctx->pc) {
        case 0x163f10u: goto label_163f10;
        default: break;
    }

    ctx->pc = 0x163ef4u;

label_163ef4:
    // 0x163ef4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x163ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_163ef8:
    // 0x163ef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x163ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163efc:
    // 0x163efc: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x163efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_163f00:
    // 0x163f00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x163f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_163f04:
    // 0x163f04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x163f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_163f08:
    // 0x163f08: 0x60f809  jalr        $v1
label_163f0c:
    if (ctx->pc == 0x163F0Cu) {
        ctx->pc = 0x163F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F08u;
        // 0x163f0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F10u;
        goto label_163f10;
    }
    ctx->pc = 0x163F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163F10u);
        ctx->pc = 0x163F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F08u;
        // 0x163f0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163F08u, 0x163F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163F10u;
label_163f10:
    // 0x163f10: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x163f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_163f14:
    // 0x163f14: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_163f18:
    // 0x163f18: 0x10000018  b           . + 4 + (0x18 << 2)
label_163f1c:
    if (ctx->pc == 0x163F1Cu) {
        ctx->pc = 0x163F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F18u;
        // 0x163f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F20u;
        goto label_fallthrough_0x163f18;
    }
    ctx->pc = 0x163F18u;
    {
        const bool branch_taken_0x163f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F18u;
        // 0x163f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f18) {
            ctx->pc = 0x163F7Cu;
            return;
        }
    }
label_fallthrough_0x163f18:
    ctx->pc = 0x163F20u;
}
