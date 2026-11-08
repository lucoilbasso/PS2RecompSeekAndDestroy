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

// Function: entry_0013fa84
// Address: 0x13fa84 - 0x13fa98
void entry_0013fa84_0x13fa84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fa84_0x13fa84");
#endif

    switch (ctx->pc) {
        case 0x13fa8cu: goto label_13fa8c;
        default: break;
    }

    ctx->pc = 0x13fa84u;

    // 0x13fa84: 0xc04ff38  jal         func_13FCE0
    ctx->pc = 0x13FA84u;
    SET_GPR_U32(ctx, 31, 0x13FA8Cu);
    ctx->pc = 0x13FA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA84u;
    // 0x13fa88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FCE0u, 0x13FA84u, 0x13FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA8Cu;
label_13fa8c:
    // 0x13fa8c: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x13fa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x13fa90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fa90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fa94: 0x24020444  addiu       $v0, $zero, 0x444
    ctx->pc = 0x13fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1092));
    ctx->pc = 0x13fa98u;
}
