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

// Function: entry_00190ee0
// Address: 0x190ee0 - 0x190f10
void entry_00190ee0_0x190ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190ee0_0x190ee0");
#endif

    ctx->pc = 0x190ee0u;

    // 0x190ee0: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x190ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x190ee4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x190ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x190ee8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x190ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x190eec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x190eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x190ef0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x190ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x190ef4: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x190ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x190ef8: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x190ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x190efc: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x190efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x190f00: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x190f00u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x190f04: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x190f04u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x190f08: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x190f08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x190f0c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x190f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x190f10u;
}
