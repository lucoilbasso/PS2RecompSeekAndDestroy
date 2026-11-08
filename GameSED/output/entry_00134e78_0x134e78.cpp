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

// Function: entry_00134e78
// Address: 0x134e78 - 0x134ec0
void entry_00134e78_0x134e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e78_0x134e78");
#endif

    switch (ctx->pc) {
        case 0x134e98u: goto label_134e98;
        default: break;
    }

    ctx->pc = 0x134e78u;

    // 0x134e78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x134e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x134e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x134e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x134e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x134e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134e88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x134e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x134e8c: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x134e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
    // 0x134e90: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134E90u;
    SET_GPR_U32(ctx, 31, 0x134E98u);
    ctx->pc = 0x134E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E90u;
    // 0x134e94: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134E90u, 0x134E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E98u;
label_134e98:
    // 0x134e98: 0x120000d8  beqz        $s0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x134E98u;
    {
        const bool branch_taken_0x134e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E98u;
        // 0x134e9c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e98) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x134EA0u;
    // 0x134ea0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x134ea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134ea4: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x134ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x134ea8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134EA8u;
    {
        const bool branch_taken_0x134ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x134EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EA8u;
        // 0x134eac: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ea8) {
            ctx->pc = 0x134EC0u;
            return;
        }
    }
    ctx->pc = 0x134EB0u;
    // 0x134eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134eb4: 0x24a56580  addiu       $a1, $a1, 0x6580
    ctx->pc = 0x134eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25984));
    // 0x134eb8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x134EB8u;
    SET_GPR_U32(ctx, 31, 0x134EC0u);
    ctx->pc = 0x134EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134EB8u;
    // 0x134ebc: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x134EB8u, 0x134EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134EC0u;
}
