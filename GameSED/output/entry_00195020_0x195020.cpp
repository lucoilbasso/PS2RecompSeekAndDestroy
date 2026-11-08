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

// Function: entry_00195020
// Address: 0x195020 - 0x195038
void entry_00195020_0x195020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195020_0x195020");
#endif

    ctx->pc = 0x195020u;

    // 0x195020: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x195020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x195024: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x195024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x195028: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x195028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x19502c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x19502cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x195030: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x195030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195034: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x195034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x195038u;
}
