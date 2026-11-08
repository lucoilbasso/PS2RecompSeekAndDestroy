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

// Function: MIMeJobRegist__8WcObject
// Address: 0x1953a8 - 0x1953fc
void MIMeJobRegist__8WcObject_0x1953a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MIMeJobRegist__8WcObject_0x1953a8");
#endif

    switch (ctx->pc) {
        case 0x1953dcu: goto label_1953dc;
        default: break;
    }

    ctx->pc = 0x1953a8u;

    // 0x1953a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1953a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1953ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1953acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1953b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1953b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1953b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1953b8: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1953b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1953bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1953bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1953c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1953c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1953c4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1953c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1953c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1953C8u;
    {
        const bool branch_taken_0x1953c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1953CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953C8u;
        // 0x1953cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953c8) {
            ctx->pc = 0x1953E8u;
            goto label_1953e8;
        }
    }
    ctx->pc = 0x1953D0u;
    // 0x1953d0: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1953d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1953d4: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1953D4u;
    SET_GPR_U32(ctx, 31, 0x1953DCu);
    ctx->pc = 0x1953D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1953D4u;
    // 0x1953d8: 0x2484de50  addiu       $a0, $a0, -0x21B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1953D4u, 0x1953DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1953DCu;
label_1953dc:
    // 0x1953dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1953dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1953e0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1953e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1953e4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1953e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1953e8:
    // 0x1953e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1953e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1953ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1953ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1953f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1953f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1953f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1953F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953F4u;
        // 0x1953f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953FCu;
}
