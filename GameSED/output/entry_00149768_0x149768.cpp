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

// Function: entry_00149768
// Address: 0x149768 - 0x149798
void entry_00149768_0x149768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149768_0x149768");
#endif

    switch (ctx->pc) {
        case 0x149794u: goto label_149794;
        default: break;
    }

    ctx->pc = 0x149768u;

    // 0x149768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x149768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14976c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14976cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149770: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149774: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x149774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x149778: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14977c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14977Cu;
    {
        const bool branch_taken_0x14977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14977Cu;
        // 0x149780: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14977c) {
            ctx->pc = 0x149798u;
            return;
        }
    }
    ctx->pc = 0x149784u;
    // 0x149784: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x149784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x149788: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x149788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x14978c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14978Cu;
    SET_GPR_U32(ctx, 31, 0x149794u);
    ctx->pc = 0x149790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14978Cu;
    // 0x149790: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14978Cu, 0x149794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149794u;
label_149794:
    // 0x149794: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x149798u;
}
