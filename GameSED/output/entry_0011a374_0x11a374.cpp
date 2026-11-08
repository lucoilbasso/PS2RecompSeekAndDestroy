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

// Function: entry_0011a374
// Address: 0x11a374 - 0x11a380
void entry_0011a374_0x11a374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a374_0x11a374");
#endif

    ctx->pc = 0x11a374u;

    // 0x11a374: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x11a374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a378: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x11a378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11a37c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x11a37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    ctx->pc = 0x11a380u;
}
