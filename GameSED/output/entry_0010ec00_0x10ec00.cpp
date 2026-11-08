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

// Function: entry_0010ec00
// Address: 0x10ec00 - 0x10ec48
void entry_0010ec00_0x10ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ec00_0x10ec00");
#endif

    switch (ctx->pc) {
        case 0x10ec08u: goto label_10ec08;
        default: break;
    }

    ctx->pc = 0x10ec00u;

    // 0x10ec00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10EC00u;
    SET_GPR_U32(ctx, 31, 0x10EC08u);
    ctx->pc = 0x10EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC00u;
    // 0x10ec04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10EC00u, 0x10EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC08u;
label_10ec08:
    // 0x10ec08: 0x8e130124  lw          $s3, 0x124($s0)
    ctx->pc = 0x10ec08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x10ec0c: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x10EC0Cu;
    {
        const bool branch_taken_0x10ec0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC0Cu;
        // 0x10ec10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec0c) {
            ctx->pc = 0x10EC48u;
            return;
        }
    }
    ctx->pc = 0x10EC14u;
    // 0x10ec14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ec18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec1c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10ec20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ec20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ec24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ec24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ec28: 0x24a53db8  addiu       $a1, $a1, 0x3DB8
    ctx->pc = 0x10ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15800));
    // 0x10ec2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10ec2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ec30: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x10ec30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x10ec34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10ec34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ec38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10ec38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10ec3c: 0x8068186  j           func_1A0618
    ctx->pc = 0x10EC3Cu;
    ctx->pc = 0x10EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC3Cu;
    // 0x10ec40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x10EC44u;
    // 0x10ec44: 0x0  nop
    ctx->pc = 0x10ec44u;
    // NOP
    ctx->pc = 0x10ec48u;
}
