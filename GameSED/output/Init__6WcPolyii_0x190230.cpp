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

// Function: Init__6WcPolyii
// Address: 0x190230 - 0x190298
void Init__6WcPolyii_0x190230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__6WcPolyii_0x190230");
#endif

    switch (ctx->pc) {
        case 0x190254u: goto label_190254;
        case 0x190280u: goto label_190280;
        default: break;
    }

    ctx->pc = 0x190230u;

    // 0x190230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x190234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x190238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19023c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19023cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x190240: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x190240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x190244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x190248: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x190248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19024c: 0xc061258  jal         func_184960
    ctx->pc = 0x19024Cu;
    SET_GPR_U32(ctx, 31, 0x190254u);
    ctx->pc = 0x190250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19024Cu;
    // 0x190250: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x19024Cu, 0x190254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190254u;
label_190254:
    // 0x190254: 0x24020086  addiu       $v0, $zero, 0x86
    ctx->pc = 0x190254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x190258: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x190258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x19025c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19025cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x190260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190264: 0xae0001cc  sw          $zero, 0x1CC($s0)
    ctx->pc = 0x190264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 0));
    // 0x190268: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x190268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19026c: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x19026cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x190270: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x190270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190274: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x190274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x190278: 0xc063c6e  jal         func_18F1B8
    ctx->pc = 0x190278u;
    SET_GPR_U32(ctx, 31, 0x190280u);
    ctx->pc = 0x19027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190278u;
    // 0x19027c: 0xae0001d8  sw          $zero, 0x1D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1B8u, 0x190278u, 0x190280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190280u;
label_190280:
    // 0x190280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x190288: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x190288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19028c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19028cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x190290: 0x3e00008  jr          $ra
    ctx->pc = 0x190290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190290u;
        // 0x190294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190298u;
}
