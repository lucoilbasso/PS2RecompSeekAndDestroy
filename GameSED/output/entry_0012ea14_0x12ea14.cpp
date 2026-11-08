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

// Function: entry_0012ea14
// Address: 0x12ea14 - 0x12ea60
void entry_0012ea14_0x12ea14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ea14_0x12ea14");
#endif

    ctx->pc = 0x12ea14u;

    // 0x12ea14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ea18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12ea1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ea20: 0x245194f0  addiu       $s1, $v0, -0x6B10
    ctx->pc = 0x12ea20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939888));
    // 0x12ea24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ea28: 0x24729440  addiu       $s2, $v1, -0x6BC0
    ctx->pc = 0x12ea28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
    // 0x12ea2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12ea30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12ea30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12ea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12ea38: 0x2414002b  addiu       $s4, $zero, 0x2B
    ctx->pc = 0x12ea38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12ea3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12ea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12ea40: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x12ea40u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12ea44: 0x15acf8  dsll        $s5, $s5, 19
    ctx->pc = 0x12ea44u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 19);
    // 0x12ea48: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12ea4c: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x12ea4cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12ea50: 0x16b3bc  dsll32      $s6, $s6, 14
    ctx->pc = 0x12ea50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 14));
    // 0x12ea54: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x12ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x12ea58: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x12ea58u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    // 0x12ea5c: 0x0  nop
    ctx->pc = 0x12ea5cu;
    // NOP
    ctx->pc = 0x12ea60u;
}
