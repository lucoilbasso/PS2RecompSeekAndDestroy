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

// Function: entry_001a1228
// Address: 0x1a1228 - 0x1a1260
void entry_001a1228_0x1a1228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1228_0x1a1228");
#endif

    ctx->pc = 0x1a1228u;

    // 0x1a1228: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a1228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a122c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a1230: 0x8c422c04  lw          $v0, 0x2C04($v0)
    ctx->pc = 0x1a1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x1a1234: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a1234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a1238: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a123c: 0x8c632c00  lw          $v1, 0x2C00($v1)
    ctx->pc = 0x1a123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11264)));
    // 0x1a1240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1244: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1248: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1248u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a124c: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a124cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 0));
    // 0x1a1250: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a1250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1a1254: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1258: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1258u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a125c: 0xac222c04  sw          $v0, 0x2C04($at)
    ctx->pc = 0x1a125cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11268), GPR_U32(ctx, 2));
    ctx->pc = 0x1a1260u;
}
