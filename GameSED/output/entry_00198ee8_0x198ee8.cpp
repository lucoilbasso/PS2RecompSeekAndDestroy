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

// Function: entry_00198ee8
// Address: 0x198ee8 - 0x198f00
void entry_00198ee8_0x198ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198ee8_0x198ee8");
#endif

    switch (ctx->pc) {
        case 0x198ef4u: goto label_198ef4;
        default: break;
    }

    ctx->pc = 0x198ee8u;

    // 0x198ee8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x198ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x198eec: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198EECu;
    SET_GPR_U32(ctx, 31, 0x198EF4u);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198EECu, 0x198EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198EF4u;
label_198ef4:
    // 0x198ef4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198ef8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x198ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x198efc: 0x0  nop
    ctx->pc = 0x198efcu;
    // NOP
    ctx->pc = 0x198f00u;
}
