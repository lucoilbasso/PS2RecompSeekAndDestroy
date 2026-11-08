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

// Function: entry_001a6350
// Address: 0x1a6350 - 0x1a63a8
void entry_001a6350_0x1a6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6350_0x1a6350");
#endif

    switch (ctx->pc) {
        case 0x1a6368u: goto label_1a6368;
        case 0x1a639cu: goto label_1a639c;
        default: break;
    }

    ctx->pc = 0x1a6350u;

    // 0x1a6350: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6354: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6358: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a635c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a635cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6360: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6360u;
    SET_GPR_U32(ctx, 31, 0x1A6368u);
    ctx->pc = 0x1A6364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6360u;
    // 0x1a6364: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6360u, 0x1A6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6368u;
label_1a6368:
    // 0x1a6368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a636c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a636cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6370: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6374: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6378: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a637c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6380: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6384: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a6388: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a6388u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a638c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A638Cu;
    {
        const bool branch_taken_0x1a638c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A638Cu;
        // 0x1a6390: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a638c) {
            ctx->pc = 0x1A63A8u;
            return;
        }
    }
    ctx->pc = 0x1A6394u;
    // 0x1a6394: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6394u;
    SET_GPR_U32(ctx, 31, 0x1A639Cu);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6394u, 0x1A639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A639Cu;
label_1a639c:
    // 0x1a639c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A639Cu;
    {
        const bool branch_taken_0x1a639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A639Cu;
        // 0x1a63a0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a639c) {
            ctx->pc = 0x1A63ACu;
            return;
        }
    }
    ctx->pc = 0x1A63A4u;
    // 0x1a63a4: 0x0  nop
    ctx->pc = 0x1a63a4u;
    // NOP
    ctx->pc = 0x1a63a8u;
}
