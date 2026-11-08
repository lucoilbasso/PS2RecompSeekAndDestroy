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

// Function: __tf6WcFile
// Address: 0x1dc750 - 0x1dc79c
void ps2___tf6WcFile_0x1dc750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf6WcFile_0x1dc750");
#endif

    switch (ctx->pc) {
        case 0x1dc774u: goto label_1dc774;
        case 0x1dc788u: goto label_1dc788;
        default: break;
    }

    ctx->pc = 0x1dc750u;

    // 0x1dc750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc754: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dc754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dc758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc75c: 0x24501510  addiu       $s0, $v0, 0x1510
    ctx->pc = 0x1dc75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5392));
    // 0x1dc760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dc760u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411510u));
    // 0x1dc764: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC764u;
    {
        const bool branch_taken_0x1dc764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC764u;
        // 0x1dc768: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc764) {
            ctx->pc = 0x1DC788u;
            goto label_1dc788;
        }
    }
    ctx->pc = 0x1DC76Cu;
    // 0x1dc76c: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1DC76Cu;
    SET_GPR_U32(ctx, 31, 0x1DC774u);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1DC76Cu, 0x1DC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC774u;
label_1dc774:
    // 0x1dc774: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1dc774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1dc778: 0x24a5d5a0  addiu       $a1, $a1, -0x2A60
    ctx->pc = 0x1dc778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956448));
    // 0x1dc77c: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1dc77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1dc780: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DC780u;
    SET_GPR_U32(ctx, 31, 0x1DC788u);
    ctx->pc = 0x1DC784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC780u;
    // 0x1dc784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DC780u, 0x1DC788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC788u;
label_1dc788:
    // 0x1dc788: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc78c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc790: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc794: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC794u;
        // 0x1dc798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC79Cu;
}
