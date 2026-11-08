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

// Function: audioDecEndPut
// Address: 0x171128 - 0x1711a4
void audioDecEndPut_0x171128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecEndPut_0x171128");
#endif

    ctx->pc = 0x171128u;

    // 0x171128: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x171128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17112c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x171130: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x171130u;
    {
        const bool branch_taken_0x171130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171130) {
            ctx->pc = 0x171134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171130u;
            // 0x171134: 0x8cc20034  lw          $v0, 0x34($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17116Cu;
            goto label_17116c;
        }
    }
    ctx->pc = 0x171138u;
    // 0x171138: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x171138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x17113c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x17113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x171140: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x171140u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171144: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x171144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x171148: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x171148u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x17114c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x171150: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x171150u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x171154: 0x2c830028  sltiu       $v1, $a0, 0x28
    ctx->pc = 0x171154u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x171158: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x171158u;
    {
        const bool branch_taken_0x171158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171158u;
        // 0x17115c: 0xacc4002c  sw          $a0, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171158) {
            ctx->pc = 0x171168u;
            goto label_171168;
        }
    }
    ctx->pc = 0x171160u;
    // 0x171160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171164: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x171164u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_171168:
    // 0x171168: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x171168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_17116c:
    // 0x17116c: 0x8cc3003c  lw          $v1, 0x3C($a2)
    ctx->pc = 0x17116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x171170: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x171170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x171174: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x171174u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x171178: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x171178u;
    {
        const bool branch_taken_0x171178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171178) {
            ctx->pc = 0x17117Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171178u;
            // 0x17117c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x171180u;
            goto label_171180;
        }
    }
    ctx->pc = 0x171180u;
label_171180:
    // 0x171180: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x171180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x171184: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x171184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x171188: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x171188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17118c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x171190: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x171190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
    // 0x171194: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x171194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x171198: 0x2010  mfhi        $a0
    ctx->pc = 0x171198u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x17119c: 0x3e00008  jr          $ra
    ctx->pc = 0x17119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17119Cu;
        // 0x1711a0: 0xacc40034  sw          $a0, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17119Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1711A4u;
}
