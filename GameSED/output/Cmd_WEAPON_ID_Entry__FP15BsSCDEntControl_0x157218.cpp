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

// Function: Cmd_WEAPON_ID_Entry__FP15BsSCDEntControl
// Address: 0x157218 - 0x157280
void Cmd_WEAPON_ID_Entry__FP15BsSCDEntControl_0x157218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_WEAPON_ID_Entry__FP15BsSCDEntControl_0x157218");
#endif

    switch (ctx->pc) {
        case 0x15725cu: goto label_15725c;
        case 0x157264u: goto label_157264;
        default: break;
    }

    ctx->pc = 0x157218u;

    // 0x157218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15721c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x15721cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x157220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157224: 0x24062118  addiu       $a2, $zero, 0x2118
    ctx->pc = 0x157224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x157228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15722c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15722cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157234: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x157234u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x157238: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x157238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15723c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x15723cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157244: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x157244u;
    {
        const bool branch_taken_0x157244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x157248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157244u;
        // 0x157248: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157244) {
            ctx->pc = 0x15725Cu;
            goto label_15725c;
        }
    }
    ctx->pc = 0x15724Cu;
    // 0x15724c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15724cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x157250: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x157250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x157254: 0xc068186  jal         func_1A0618
    ctx->pc = 0x157254u;
    SET_GPR_U32(ctx, 31, 0x15725Cu);
    ctx->pc = 0x157258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157254u;
    // 0x157258: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x157254u, 0x15725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15725Cu;
label_15725c:
    // 0x15725c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x15725Cu;
    SET_GPR_U32(ctx, 31, 0x157264u);
    ctx->pc = 0x157260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15725Cu;
    // 0x157260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x15725Cu, 0x157264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157264u;
label_157264:
    // 0x157264: 0x86030264  lh          $v1, 0x264($s0)
    ctx->pc = 0x157264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x157268: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15726c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15726cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157274: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x157274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x157278: 0x3e00008  jr          $ra
    ctx->pc = 0x157278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157278u;
        // 0x15727c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157280u;
}
