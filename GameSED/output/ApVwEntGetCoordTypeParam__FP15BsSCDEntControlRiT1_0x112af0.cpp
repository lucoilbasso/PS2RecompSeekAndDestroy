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

// Function: ApVwEntGetCoordTypeParam__FP15BsSCDEntControlRiT1
// Address: 0x112af0 - 0x112b38
void ApVwEntGetCoordTypeParam__FP15BsSCDEntControlRiT1_0x112af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetCoordTypeParam__FP15BsSCDEntControlRiT1_0x112af0");
#endif

    switch (ctx->pc) {
        case 0x112b0cu: goto label_112b0c;
        default: break;
    }

    ctx->pc = 0x112af0u;

    // 0x112af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112af8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x112af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x112afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x112b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112b04: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112B04u;
    SET_GPR_U32(ctx, 31, 0x112B0Cu);
    ctx->pc = 0x112B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B04u;
    // 0x112b08: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112B04u, 0x112B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B0Cu;
label_112b0c:
    // 0x112b0c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x112b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x112b10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x112b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x112b14: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x112b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x112b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112b1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x112b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112b24: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x112b24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x112b28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x112b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x112b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112b30: 0x3e00008  jr          $ra
    ctx->pc = 0x112B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B30u;
        // 0x112b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112B38u;
}
