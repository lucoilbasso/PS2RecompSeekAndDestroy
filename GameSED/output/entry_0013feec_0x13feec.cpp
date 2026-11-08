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

// Function: entry_0013feec
// Address: 0x13feec - 0x13ff44
void entry_0013feec_0x13feec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013feec_0x13feec");
#endif

    ctx->pc = 0x13feecu;

    // 0x13feec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13feecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fef0: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x13fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13fef4: 0xfe440150  sd          $a0, 0x150($s2)
    ctx->pc = 0x13fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 336), GPR_U64(ctx, 4));
    // 0x13fef8: 0x34a53008  ori         $a1, $a1, 0x3008
    ctx->pc = 0x13fef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12296);
    // 0x13fefc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13fefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ff00: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x13ff00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13ff04: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13ff04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ff08: 0xfe430158  sd          $v1, 0x158($s2)
    ctx->pc = 0x13ff08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 344), GPR_U64(ctx, 3));
    // 0x13ff0c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13ff0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ff10: 0xde640010  ld          $a0, 0x10($s3)
    ctx->pc = 0x13ff10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13ff14: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13ff14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13ff18: 0xfe440160  sd          $a0, 0x160($s2)
    ctx->pc = 0x13ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 352), GPR_U64(ctx, 4));
    // 0x13ff1c: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x13ff1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x13ff20: 0xfe430168  sd          $v1, 0x168($s2)
    ctx->pc = 0x13ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 360), GPR_U64(ctx, 3));
    // 0x13ff24: 0xde640020  ld          $a0, 0x20($s3)
    ctx->pc = 0x13ff24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x13ff28: 0xfe440170  sd          $a0, 0x170($s2)
    ctx->pc = 0x13ff28u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 368), GPR_U64(ctx, 4));
    // 0x13ff2c: 0xde630028  ld          $v1, 0x28($s3)
    ctx->pc = 0x13ff2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x13ff30: 0xae45001c  sw          $a1, 0x1C($s2)
    ctx->pc = 0x13ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
    // 0x13ff34: 0xfe430178  sd          $v1, 0x178($s2)
    ctx->pc = 0x13ff34u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 376), GPR_U64(ctx, 3));
    // 0x13ff38: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x13ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
    // 0x13ff3c: 0xae4001ac  sw          $zero, 0x1AC($s2)
    ctx->pc = 0x13ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 0));
    // 0x13ff40: 0xae4001b0  sw          $zero, 0x1B0($s2)
    ctx->pc = 0x13ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 0));
    ctx->pc = 0x13ff44u;
}
