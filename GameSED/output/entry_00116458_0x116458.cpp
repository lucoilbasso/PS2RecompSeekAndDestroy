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

// Function: entry_00116458
// Address: 0x116458 - 0x1164ac
void entry_00116458_0x116458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116458_0x116458");
#endif

    switch (ctx->pc) {
        case 0x116478u: goto label_116478;
        case 0x11648cu: goto label_11648c;
        default: break;
    }

    ctx->pc = 0x116458u;

    // 0x116458: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x116458u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
    // 0x11645c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11645cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116460: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x116460u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x116464: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x116464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x116468: 0x2421c0c0  addiu       $at, $at, -0x3F40
    ctx->pc = 0x116468u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951104));
    // 0x11646c: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x11646cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x116470: 0xc041882  jal         func_106208
    ctx->pc = 0x116470u;
    SET_GPR_U32(ctx, 31, 0x116478u);
    ctx->pc = 0x116474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116470u;
    // 0x116474: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116470u, 0x116478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116478u;
label_116478:
    // 0x116478: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x116478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11647c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116480: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x116480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116484: 0xc041882  jal         func_106208
    ctx->pc = 0x116484u;
    SET_GPR_U32(ctx, 31, 0x11648Cu);
    ctx->pc = 0x116488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116484u;
    // 0x116488: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116484u, 0x11648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11648Cu;
label_11648c:
    // 0x11648c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x11648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116490: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x116490u;
    {
        const bool branch_taken_0x116490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116490u;
        // 0x116494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116490) {
            ctx->pc = 0x1164ACu;
            return;
        }
    }
    ctx->pc = 0x116498u;
    // 0x116498: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x116498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11649c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11649cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1164a0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1164a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1164a4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1164a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1164a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1164a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1164acu;
}
