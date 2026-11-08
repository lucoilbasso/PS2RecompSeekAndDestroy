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

// Function: entry_00156ef8
// Address: 0x156ef8 - 0x156f3c
void entry_00156ef8_0x156ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ef8_0x156ef8");
#endif

    switch (ctx->pc) {
        case 0x156f04u: goto label_156f04;
        default: break;
    }

    ctx->pc = 0x156ef8u;

    // 0x156ef8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x156ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x156efc: 0xc0529f0  jal         func_14A7C0
    ctx->pc = 0x156EFCu;
    SET_GPR_U32(ctx, 31, 0x156F04u);
    ctx->pc = 0x156F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EFCu;
    // 0x156f00: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7C0u, 0x156EFCu, 0x156F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F04u;
label_156f04:
    // 0x156f04: 0x24032118  addiu       $v1, $zero, 0x2118
    ctx->pc = 0x156f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x156f08: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x156f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x156f0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x156f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x156f10: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x156f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x156f14: 0xa6000266  sh          $zero, 0x266($s0)
    ctx->pc = 0x156f14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 0));
    // 0x156f18: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x156f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x156f1c: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x156f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x156f20: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x156F20u;
    {
        const bool branch_taken_0x156f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F20u;
        // 0x156f24: 0xa6130264  sh          $s3, 0x264($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 612), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f20) {
            ctx->pc = 0x156F84u;
            return;
        }
    }
    ctx->pc = 0x156F28u;
    // 0x156f28: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x156f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156f2c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x156F2Cu;
    {
        const bool branch_taken_0x156f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x156f2c) {
            ctx->pc = 0x156F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156F2Cu;
            // 0x156f30: 0xae110260  sw          $s1, 0x260($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156F3Cu;
            return;
        }
    }
    ctx->pc = 0x156F34u;
    // 0x156f34: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x156f38: 0xae020260  sw          $v0, 0x260($s0)
    ctx->pc = 0x156f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
    ctx->pc = 0x156f3cu;
}
