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

// Function: Cmd_GET_PARTS_MODEL_Entry__FP15BsSCDEntControl
// Address: 0x119258 - 0x1192c4
void Cmd_GET_PARTS_MODEL_Entry__FP15BsSCDEntControl_0x119258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_PARTS_MODEL_Entry__FP15BsSCDEntControl_0x119258");
#endif

    switch (ctx->pc) {
        case 0x119270u: goto label_119270;
        case 0x119294u: goto label_119294;
        case 0x1192a0u: goto label_1192a0;
        default: break;
    }

    ctx->pc = 0x119258u;

    // 0x119258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11925c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119268: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x119268u;
    SET_GPR_U32(ctx, 31, 0x119270u);
    ctx->pc = 0x11926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119268u;
    // 0x11926c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x119268u, 0x119270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119270u;
label_119270:
    // 0x119270: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x119270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x119274: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119278: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x119278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x11927c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11927cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119280: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x119280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x119284: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119284u;
    {
        const bool branch_taken_0x119284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x119288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119284u;
        // 0x119288: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119284) {
            ctx->pc = 0x119298u;
            goto label_119298;
        }
    }
    ctx->pc = 0x11928Cu;
    // 0x11928c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11928Cu;
    SET_GPR_U32(ctx, 31, 0x119294u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11928Cu, 0x119294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119294u;
label_119294:
    // 0x119294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119298:
    // 0x119298: 0xc04566c  jal         func_1159B0
    ctx->pc = 0x119298u;
    SET_GPR_U32(ctx, 31, 0x1192A0u);
    ctx->pc = 0x11929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119298u;
    // 0x11929c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B0u, 0x119298u, 0x1192A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192A0u;
label_1192a0:
    // 0x1192a0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1192a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1192a4: 0x102200  sll         $a0, $s0, 8
    ctx->pc = 0x1192a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1192a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1192a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1192ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1192acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1192b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1192b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1192b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1192b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1192b8: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x1192b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x1192bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1192BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1192C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192BCu;
        // 0x1192c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1192BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1192C4u;
}
