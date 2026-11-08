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

// Function: serialPutchar
// Address: 0x1b0768 - 0x1b079c
void serialPutchar_0x1b0768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("serialPutchar_0x1b0768");
#endif

    switch (ctx->pc) {
        case 0x1b0780u: goto label_1b0780;
        default: break;
    }

    ctx->pc = 0x1b0768u;

    // 0x1b0768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b076c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b0770: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0770u;
    {
        const bool branch_taken_0x1b0770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0770u;
        // 0x1b0774: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0770) {
            ctx->pc = 0x1B0790u;
            goto label_1b0790;
        }
    }
    ctx->pc = 0x1B0778u;
    // 0x1b0778: 0xc06c1a0  jal         func_1B0680
    ctx->pc = 0x1B0778u;
    SET_GPR_U32(ctx, 31, 0x1B0780u);
    ctx->pc = 0x1B077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0778u;
    // 0x1b077c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0680u, 0x1B0778u, 0x1B0780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0780u;
label_1b0780:
    // 0x1b0780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0784: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b0784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b0788: 0x806c1a0  j           func_1B0680
    ctx->pc = 0x1B0788u;
    ctx->pc = 0x1B078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0788u;
    // 0x1b078c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0680u;
    kputchar_0x1b0680(rdram, ctx, runtime); return;
    ctx->pc = 0x1B0790u;
label_1b0790:
    // 0x1b0790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0794: 0x806c1a0  j           func_1B0680
    ctx->pc = 0x1B0794u;
    ctx->pc = 0x1B0798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0794u;
    // 0x1b0798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0680u;
    kputchar_0x1b0680(rdram, ctx, runtime); return;
    ctx->pc = 0x1B079Cu;
}
