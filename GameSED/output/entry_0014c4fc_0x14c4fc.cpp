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

// Function: entry_0014c4fc
// Address: 0x14c4fc - 0x14c56c
void entry_0014c4fc_0x14c4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c4fc_0x14c4fc");
#endif

    switch (ctx->pc) {
        case 0x14c508u: goto label_14c508;
        default: break;
    }

    ctx->pc = 0x14c4fcu;

    // 0x14c4fc: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x14c4fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c500: 0xc0582b2  jal         func_160AC8
    ctx->pc = 0x14C500u;
    SET_GPR_U32(ctx, 31, 0x14C508u);
    ctx->pc = 0x14C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C500u;
    // 0x14c504: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160AC8u, 0x14C500u, 0x14C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C508u;
label_14c508:
    // 0x14c508: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14c508u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c50c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14C50Cu;
    {
        const bool branch_taken_0x14c50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C50Cu;
        // 0x14c510: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c50c) {
            ctx->pc = 0x14C56Cu;
            return;
        }
    }
    ctx->pc = 0x14C514u;
    // 0x14c514: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14C514u;
    {
        const bool branch_taken_0x14c514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c514) {
            ctx->pc = 0x14C518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C514u;
            // 0x14c518: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C570u;
            return;
        }
    }
    ctx->pc = 0x14C51Cu;
    // 0x14c51c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x14c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x14c520: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14c524: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14c524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14c528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14c528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c52c: 0x24440170  addiu       $a0, $v0, 0x170
    ctx->pc = 0x14c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x14c530: 0x8c830204  lw          $v1, 0x204($a0)
    ctx->pc = 0x14c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x14c534: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14c534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14c538: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14c538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14c53c: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x14c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    // 0x14c540: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x14c540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x14c544: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14c544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x14c548: 0x8c820204  lw          $v0, 0x204($a0)
    ctx->pc = 0x14c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x14c54c: 0x8c830200  lw          $v1, 0x200($a0)
    ctx->pc = 0x14c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x14c550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c554: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x14c554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x14c558: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C558u;
    {
        const bool branch_taken_0x14c558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C558u;
        // 0x14c55c: 0xac820204  sw          $v0, 0x204($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c558) {
            ctx->pc = 0x14C56Cu;
            return;
        }
    }
    ctx->pc = 0x14C560u;
    // 0x14c560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c564: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x14c564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x14c568: 0xac820200  sw          $v0, 0x200($a0)
    ctx->pc = 0x14c568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 2));
    ctx->pc = 0x14c56cu;
}
