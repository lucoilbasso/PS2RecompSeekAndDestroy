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

// Function: GetArena__20ApItemGameInfomationii
// Address: 0x1185f0 - 0x118644
void GetArena__20ApItemGameInfomationii_0x1185f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetArena__20ApItemGameInfomationii_0x1185f0");
#endif

    switch (ctx->pc) {
        case 0x118614u: goto label_118614;
        default: break;
    }

    ctx->pc = 0x1185f0u;

    // 0x1185f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1185f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1185f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1185f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1185f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1185f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1185fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118600: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x118600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118604: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x118604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x118608: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x118608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11860c: 0xc0461a8  jal         func_1186A0
    ctx->pc = 0x11860Cu;
    SET_GPR_U32(ctx, 31, 0x118614u);
    ctx->pc = 0x118610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11860Cu;
    // 0x118610: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186A0u, 0x11860Cu, 0x118614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118614u;
label_118614:
    // 0x118614: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x118614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x118618: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x118618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11861c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x118620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118624: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x118624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x118628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11862c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11862cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x118630: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x118630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x118634: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118638: 0x84621c10  lh          $v0, 0x1C10($v1)
    ctx->pc = 0x118638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 7184)));
    // 0x11863c: 0x3e00008  jr          $ra
    ctx->pc = 0x11863Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11863Cu;
        // 0x118640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11863Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118644u;
}
