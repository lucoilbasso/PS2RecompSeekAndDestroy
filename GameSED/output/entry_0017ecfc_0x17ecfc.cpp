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

// Function: entry_0017ecfc
// Address: 0x17ecfc - 0x17ed50
void entry_0017ecfc_0x17ecfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ecfc_0x17ecfc");
#endif

    switch (ctx->pc) {
        case 0x17ed04u: goto label_17ed04;
        default: break;
    }

    ctx->pc = 0x17ecfcu;

    // 0x17ecfc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17ECFCu;
    SET_GPR_U32(ctx, 31, 0x17ED04u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17ECFCu, 0x17ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED04u;
label_17ed04:
    // 0x17ed04: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17ED04u;
    {
        const bool branch_taken_0x17ed04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED04u;
        // 0x17ed08: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed04) {
            ctx->pc = 0x17ED50u;
            return;
        }
    }
    ctx->pc = 0x17ED0Cu;
    // 0x17ed0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ed10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ed14: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17ed18: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ed1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ed1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ed20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ed20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ed24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ed24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ed28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ed28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ed2c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17ed2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ed30: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17ed30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ed34: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17ed34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ed38: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17ed38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ed3c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17ed3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ed40: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ed44: 0x8068186  j           func_1A0618
    ctx->pc = 0x17ED44u;
    ctx->pc = 0x17ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED44u;
    // 0x17ed48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17ED4Cu;
    // 0x17ed4c: 0x0  nop
    ctx->pc = 0x17ed4cu;
    // NOP
    ctx->pc = 0x17ed50u;
}
