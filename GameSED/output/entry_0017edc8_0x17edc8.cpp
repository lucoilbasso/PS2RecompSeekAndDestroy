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

// Function: entry_0017edc8
// Address: 0x17edc8 - 0x17ee18
void entry_0017edc8_0x17edc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017edc8_0x17edc8");
#endif

    switch (ctx->pc) {
        case 0x17edd0u: goto label_17edd0;
        default: break;
    }

    ctx->pc = 0x17edc8u;

    // 0x17edc8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17EDC8u;
    SET_GPR_U32(ctx, 31, 0x17EDD0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17EDC8u, 0x17EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDD0u;
label_17edd0:
    // 0x17edd0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17EDD0u;
    {
        const bool branch_taken_0x17edd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDD0u;
        // 0x17edd4: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edd0) {
            ctx->pc = 0x17EE18u;
            return;
        }
    }
    ctx->pc = 0x17EDD8u;
    // 0x17edd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eddc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17eddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ede0: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17ede0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17ede4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17ede4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ede8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ede8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17edec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17edecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17edf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17edf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17edf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17edf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17edf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17edf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17edfc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17edfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ee00: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17ee00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ee04: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17ee04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ee08: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17ee08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ee0c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17ee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ee10: 0x8068186  j           func_1A0618
    ctx->pc = 0x17EE10u;
    ctx->pc = 0x17EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE10u;
    // 0x17ee14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17EE18u;
}
