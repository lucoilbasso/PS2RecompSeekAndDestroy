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

// Function: entry_0017ed64
// Address: 0x17ed64 - 0x17edb8
void entry_0017ed64_0x17ed64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ed64_0x17ed64");
#endif

    switch (ctx->pc) {
        case 0x17ed6cu: goto label_17ed6c;
        default: break;
    }

    ctx->pc = 0x17ed64u;

    // 0x17ed64: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17ED64u;
    SET_GPR_U32(ctx, 31, 0x17ED6Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17ED64u, 0x17ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED6Cu;
label_17ed6c:
    // 0x17ed6c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17ED6Cu;
    {
        const bool branch_taken_0x17ed6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED6Cu;
        // 0x17ed70: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed6c) {
            ctx->pc = 0x17EDB8u;
            return;
        }
    }
    ctx->pc = 0x17ED74u;
    // 0x17ed74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ed78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ed7c: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17ed80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17ed80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ed84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ed84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ed88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ed88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ed8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ed8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ed90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ed90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ed94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17ed94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ed98: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17ed98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ed9c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17ed9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17eda0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17eda0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17eda4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17eda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17eda8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17eda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17edac: 0x8068186  j           func_1A0618
    ctx->pc = 0x17EDACu;
    ctx->pc = 0x17EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDACu;
    // 0x17edb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17EDB4u;
    // 0x17edb4: 0x0  nop
    ctx->pc = 0x17edb4u;
    // NOP
    ctx->pc = 0x17edb8u;
}
