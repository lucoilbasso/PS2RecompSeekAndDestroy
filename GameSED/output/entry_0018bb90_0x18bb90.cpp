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

// Function: entry_0018bb90
// Address: 0x18bb90 - 0x18bbcc
void entry_0018bb90_0x18bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bb90_0x18bb90");
#endif

    ctx->pc = 0x18bb90u;

    // 0x18bb90: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x18bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x18bb94: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x18bb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x18bb98: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x18bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x18bb9c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x18bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18bba0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18bba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18bba4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x18bba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x18bba8: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x18bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x18bbac: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x18bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18bbb0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x18bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x18bbb4: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x18bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x18bbb8: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x18bbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x18bbbc: 0x34e70070  ori         $a3, $a3, 0x70
    ctx->pc = 0x18bbbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)112);
    // 0x18bbc0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18bbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18bbc4: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x18bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x18bbc8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x18bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x18bbccu;
}
