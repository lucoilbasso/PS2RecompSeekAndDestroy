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

// Function: entry_0017eba0
// Address: 0x17eba0 - 0x17ebf0
void entry_0017eba0_0x17eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eba0_0x17eba0");
#endif

    switch (ctx->pc) {
        case 0x17eba8u: goto label_17eba8;
        default: break;
    }

    ctx->pc = 0x17eba0u;

    // 0x17eba0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17EBA0u;
    SET_GPR_U32(ctx, 31, 0x17EBA8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17EBA0u, 0x17EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBA8u;
label_17eba8:
    // 0x17eba8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17EBA8u;
    {
        const bool branch_taken_0x17eba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBA8u;
        // 0x17ebac: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eba8) {
            ctx->pc = 0x17EBF0u;
            return;
        }
    }
    ctx->pc = 0x17EBB0u;
    // 0x17ebb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ebb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ebb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ebb8: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17ebbc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ebc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ebc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ebc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ebc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ebc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ebc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ebcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ebccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ebd0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17ebd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ebd4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17ebd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ebd8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17ebd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ebdc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17ebdcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ebe0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17ebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ebe4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ebe8: 0x8068186  j           func_1A0618
    ctx->pc = 0x17EBE8u;
    ctx->pc = 0x17EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBE8u;
    // 0x17ebec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17EBF0u;
}
