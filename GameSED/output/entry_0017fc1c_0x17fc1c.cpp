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

// Function: entry_0017fc1c
// Address: 0x17fc1c - 0x17fc60
void entry_0017fc1c_0x17fc1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fc1c_0x17fc1c");
#endif

    ctx->pc = 0x17fc1cu;

    // 0x17fc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17fc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fc24: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17fc28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17fc28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17fc2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17fc2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fc30: 0x24a57d60  addiu       $a1, $a1, 0x7D60
    ctx->pc = 0x17fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32096));
    // 0x17fc34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17fc34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fc38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17fc3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17fc3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fc40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17fc40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fc44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17fc44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fc48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17fc48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17fc4c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17fc4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fc50: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17fc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fc54: 0x8068186  j           func_1A0618
    ctx->pc = 0x17FC54u;
    ctx->pc = 0x17FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC54u;
    // 0x17fc58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17FC5Cu;
    // 0x17fc5c: 0x0  nop
    ctx->pc = 0x17fc5cu;
    // NOP
    ctx->pc = 0x17fc60u;
}
