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

// Function: Cmd_STAGE_RET_LOAD_Entry__FP15BsSCDEntControl
// Address: 0x11a218 - 0x11a274
void Cmd_STAGE_RET_LOAD_Entry__FP15BsSCDEntControl_0x11a218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_RET_LOAD_Entry__FP15BsSCDEntControl_0x11a218");
#endif

    switch (ctx->pc) {
        case 0x11a250u: goto label_11a250;
        case 0x11a258u: goto label_11a258;
        default: break;
    }

    ctx->pc = 0x11a218u;

    // 0x11a218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a21c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x11a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11a220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a224: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x11a224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x11a228: 0x2610c540  addiu       $s0, $s0, -0x3AC0
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952256));
    // 0x11a22c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11a22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11a230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a234: 0x260324b0  addiu       $v1, $s0, 0x24B0
    ctx->pc = 0x11a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9392));
    // 0x11a238: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x11a238u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x11a23c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a240: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11a240u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x1EE9F0u));
    // 0x11a244: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x11a244u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x11a248: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11A248u;
    SET_GPR_U32(ctx, 31, 0x11A250u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11A248u, 0x11A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A250u;
label_11a250:
    // 0x11a250: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x11A250u;
    SET_GPR_U32(ctx, 31, 0x11A258u);
    ctx->pc = 0x11A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A250u;
    // 0x11a254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x11A250u, 0x11A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A258u;
label_11a258:
    // 0x11a258: 0x8e0324c0  lw          $v1, 0x24C0($s0)
    ctx->pc = 0x11a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9408)));
    // 0x11a25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11a25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a268: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11a268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11a26c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A26Cu;
        // 0x11a270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A274u;
}
