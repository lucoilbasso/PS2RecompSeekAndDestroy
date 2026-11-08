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

// Function: entry_001962e4
// Address: 0x1962e4 - 0x196338
void entry_001962e4_0x1962e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001962e4_0x1962e4");
#endif

    switch (ctx->pc) {
        case 0x1962ecu: goto label_1962ec;
        default: break;
    }

    ctx->pc = 0x1962e4u;

    // 0x1962e4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1962E4u;
    SET_GPR_U32(ctx, 31, 0x1962ECu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1962E4u, 0x1962ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962ECu;
label_1962ec:
    // 0x1962ec: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1962ECu;
    {
        const bool branch_taken_0x1962ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1962F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962ECu;
        // 0x1962f0: 0xae6201b4  sw          $v0, 0x1B4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962ec) {
            ctx->pc = 0x196358u;
            return;
        }
    }
    ctx->pc = 0x1962F4u;
    // 0x1962f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1962f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1962f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1962fc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1962fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x196300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196308: 0x24a58338  addiu       $a1, $a1, -0x7CC8
    ctx->pc = 0x196308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
    // 0x19630c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19630cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196310: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x196310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196314: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x196314u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196318: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x196318u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19631c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x19631cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196320: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x196320u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x196324: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x196324u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196328: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x196328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19632c: 0x8068186  j           func_1A0618
    ctx->pc = 0x19632Cu;
    ctx->pc = 0x196330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19632Cu;
    // 0x196330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x196334u;
    // 0x196334: 0x0  nop
    ctx->pc = 0x196334u;
    // NOP
    ctx->pc = 0x196338u;
}
