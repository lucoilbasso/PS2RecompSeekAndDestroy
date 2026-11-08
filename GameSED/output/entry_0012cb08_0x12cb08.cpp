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

// Function: entry_0012cb08
// Address: 0x12cb08 - 0x12cb1c
void entry_0012cb08_0x12cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cb08_0x12cb08");
#endif

    ctx->pc = 0x12cb08u;

    // 0x12cb08: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x12cb08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12cb0c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x12cb0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12cb10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x12cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x12cb14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12cb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12cb18: 0xae230120  sw          $v1, 0x120($s1)
    ctx->pc = 0x12cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
    ctx->pc = 0x12cb1cu;
}
