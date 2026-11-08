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

// Function: entry_0012cb54
// Address: 0x12cb54 - 0x12cb88
void entry_0012cb54_0x12cb54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cb54_0x12cb54");
#endif

    switch (ctx->pc) {
        case 0x12cb7cu: goto label_12cb7c;
        default: break;
    }

    ctx->pc = 0x12cb54u;

    // 0x12cb54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12cb58: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x12cb58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x12cb5c: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x12cb5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x12cb60: 0x10650083  beq         $v1, $a1, . + 4 + (0x83 << 2)
    ctx->pc = 0x12CB60u;
    {
        const bool branch_taken_0x12cb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x12CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB60u;
        // 0x12cb64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb60) {
            ctx->pc = 0x12CD70u;
            return;
        }
    }
    ctx->pc = 0x12CB68u;
    // 0x12cb68: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x12cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x12cb6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CB6Cu;
    {
        const bool branch_taken_0x12cb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB6Cu;
        // 0x12cb70: 0x8e110018  lw          $s1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb6c) {
            ctx->pc = 0x12CB88u;
            return;
        }
    }
    ctx->pc = 0x12CB74u;
    // 0x12cb74: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12CB74u;
    SET_GPR_U32(ctx, 31, 0x12CB7Cu);
    ctx->pc = 0x12CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB74u;
    // 0x12cb78: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12CB74u, 0x12CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB7Cu;
label_12cb7c:
    // 0x12cb7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12CB7Cu;
    {
        const bool branch_taken_0x12cb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB7Cu;
        // 0x12cb80: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb7c) {
            ctx->pc = 0x12CB94u;
            return;
        }
    }
    ctx->pc = 0x12CB84u;
    // 0x12cb84: 0x0  nop
    ctx->pc = 0x12cb84u;
    // NOP
    ctx->pc = 0x12cb88u;
}
