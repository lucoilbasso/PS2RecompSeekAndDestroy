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

// Function: entry_001cb33c
// Address: 0x1cb33c - 0x1cb368
void entry_001cb33c_0x1cb33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb33c_0x1cb33c");
#endif

    switch (ctx->pc) {
        case 0x1cb354u: goto label_1cb354;
        default: break;
    }

    ctx->pc = 0x1cb33cu;

    // 0x1cb33c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CB33Cu;
    {
        const bool branch_taken_0x1cb33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb33c) {
            ctx->pc = 0x1CB3F0u;
            return;
        }
    }
    ctx->pc = 0x1CB344u;
    // 0x1cb344: 0x1044001c  beq         $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CB344u;
    {
        const bool branch_taken_0x1cb344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cb344) {
            ctx->pc = 0x1CB3B8u;
            return;
        }
    }
    ctx->pc = 0x1CB34Cu;
    // 0x1cb34c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CB34Cu;
    SET_GPR_U32(ctx, 31, 0x1CB354u);
    ctx->pc = 0x1CB350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB34Cu;
    // 0x1cb350: 0x8e64aa44  lw          $a0, -0x55BC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CB34Cu, 0x1CB354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB354u;
label_1cb354:
    // 0x1cb354: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x1cb354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb358: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1CB358u;
    {
        const bool branch_taken_0x1cb358 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB358u;
        // 0x1cb35c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb358) {
            ctx->pc = 0x1CB410u;
            return;
        }
    }
    ctx->pc = 0x1CB360u;
    // 0x1cb360: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb364: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x1cb364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    ctx->pc = 0x1cb368u;
}
