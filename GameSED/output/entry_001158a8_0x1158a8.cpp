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

// Function: entry_001158a8
// Address: 0x1158a8 - 0x1158ec
void entry_001158a8_0x1158a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001158a8_0x1158a8");
#endif

    switch (ctx->pc) {
        case 0x1158e8u: goto label_1158e8;
        default: break;
    }

    ctx->pc = 0x1158a8u;

    // 0x1158a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1158a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1158ac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1158ACu;
    {
        const bool branch_taken_0x1158ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1158B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158ACu;
        // 0x1158b0: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158ac) {
            ctx->pc = 0x115940u;
            return;
        }
    }
    ctx->pc = 0x1158B4u;
    // 0x1158b4: 0x3d49021  addu        $s2, $fp, $s4
    ctx->pc = 0x1158b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x1158b8: 0x2442c540  addiu       $v0, $v0, -0x3AC0
    ctx->pc = 0x1158b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
    // 0x1158bc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1158bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1158c0: 0x84620ff0  lh          $v0, 0xFF0($v1)
    ctx->pc = 0x1158c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4080)));
    // 0x1158c4: 0x1052001e  beq         $v0, $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1158C4u;
    {
        const bool branch_taken_0x1158c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158C4u;
        // 0x1158c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158c4) {
            ctx->pc = 0x115940u;
            return;
        }
    }
    ctx->pc = 0x1158CCu;
    // 0x1158cc: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1158CCu;
    {
        const bool branch_taken_0x1158cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1158D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158CCu;
        // 0x1158d0: 0x128a03  sra         $s1, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158cc) {
            ctx->pc = 0x1158ECu;
            return;
        }
    }
    ctx->pc = 0x1158D4u;
    // 0x1158d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1158d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1158d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1158d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158dc: 0x24454390  addiu       $a1, $v0, 0x4390
    ctx->pc = 0x1158dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17296));
    // 0x1158e0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1158E0u;
    SET_GPR_U32(ctx, 31, 0x1158E8u);
    ctx->pc = 0x1158E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158E0u;
    // 0x1158e4: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1158E0u, 0x1158E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158E8u;
label_1158e8:
    // 0x1158e8: 0x128a03  sra         $s1, $s2, 8
    ctx->pc = 0x1158e8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 8));
    ctx->pc = 0x1158ecu;
}
