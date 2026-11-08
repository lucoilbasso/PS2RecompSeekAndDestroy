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

// Function: caseD_12
// Address: 0x154ff0 - 0x155030
void caseD_12_0x154ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x154ff0");
#endif

    switch (ctx->pc) {
        case 0x155000u: goto label_155000;
        case 0x15502cu: goto label_15502c;
        default: break;
    }

    ctx->pc = 0x154ff0u;

    // 0x154ff0: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x154ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x154ff4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x154ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ff8: 0xc041da8  jal         func_1076A0
    ctx->pc = 0x154FF8u;
    SET_GPR_U32(ctx, 31, 0x155000u);
    ctx->pc = 0x154FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FF8u;
    // 0x154ffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076A0u, 0x154FF8u, 0x155000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155000u;
label_155000:
    // 0x155000: 0x2603071c  addiu       $v1, $s0, 0x71C
    ctx->pc = 0x155000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
    // 0x155004: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155008: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x155008u;
    {
        const bool branch_taken_0x155008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155008) {
            ctx->pc = 0x15500Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155008u;
            // 0x15500c: 0x2603075c  addiu       $v1, $s0, 0x75C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155030u;
            return;
        }
    }
    ctx->pc = 0x155010u;
    // 0x155010: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x155010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x155014: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x155014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155018: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x155018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15501c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15501cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155020: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x155020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x155024: 0xc041da8  jal         func_1076A0
    ctx->pc = 0x155024u;
    SET_GPR_U32(ctx, 31, 0x15502Cu);
    ctx->pc = 0x155028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155024u;
    // 0x155028: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076A0u, 0x155024u, 0x15502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15502Cu;
label_15502c:
    // 0x15502c: 0x2603075c  addiu       $v1, $s0, 0x75C
    ctx->pc = 0x15502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
    ctx->pc = 0x155030u;
}
