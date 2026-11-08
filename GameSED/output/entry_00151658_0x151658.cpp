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

// Function: entry_00151658
// Address: 0x151658 - 0x1516a0
void entry_00151658_0x151658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151658_0x151658");
#endif

    ctx->pc = 0x151658u;

    // 0x151658: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x151658u;
    {
        const bool branch_taken_0x151658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151658) {
            ctx->pc = 0x15165Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151658u;
            // 0x15165c: 0xc6000414  lwc1        $f0, 0x414($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x151868u;
            return;
        }
    }
    ctx->pc = 0x151660u;
    // 0x151660: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x151660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x151664: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x151664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x151668: 0xc60103b8  lwc1        $f1, 0x3B8($s0)
    ctx->pc = 0x151668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15166c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x15166cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151670: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151674: 0x3a82b  sltu        $s5, $zero, $v1
    ctx->pc = 0x151674u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x151678: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x151678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x15167c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15167cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151680: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x151680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151684: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x151684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x151688: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x151688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x15168c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x15168cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x151690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151690u;
    {
        const bool branch_taken_0x151690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151690u;
        // 0x151694: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151690) {
            ctx->pc = 0x1516A0u;
            return;
        }
    }
    ctx->pc = 0x151698u;
    // 0x151698: 0xc061920  jal         func_186480
    ctx->pc = 0x151698u;
    SET_GPR_U32(ctx, 31, 0x1516A0u);
    ctx->pc = 0x15169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151698u;
    // 0x15169c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x151698u, 0x1516A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516A0u;
}
