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

// Function: entry_0018ef44
// Address: 0x18ef44 - 0x18ef64
void entry_0018ef44_0x18ef44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef44_0x18ef44");
#endif

    ctx->pc = 0x18ef44u;

    // 0x18ef44: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x18ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x18ef48: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x18ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x18ef4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18ef50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ef50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ef54: 0x24631b88  addiu       $v1, $v1, 0x1B88
    ctx->pc = 0x18ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7048));
    // 0x18ef58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18ef5c: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x18ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x18ef60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18ef60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x18ef64u;
}
