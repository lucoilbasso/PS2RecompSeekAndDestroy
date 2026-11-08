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

// Function: entry_00151214
// Address: 0x151214 - 0x151250
void entry_00151214_0x151214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151214_0x151214");
#endif

    ctx->pc = 0x151214u;

    // 0x151214: 0x122000a2  beqz        $s1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x151214u;
    {
        const bool branch_taken_0x151214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x151218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151214u;
        // 0x151218: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151214) {
            ctx->pc = 0x1514A0u;
            return;
        }
    }
    ctx->pc = 0x15121Cu;
    // 0x15121c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x151220: 0xc60103b8  lwc1        $f1, 0x3B8($s0)
    ctx->pc = 0x151220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151224: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x151224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151228: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x151228u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15122c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x151230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151234: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x151234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x151238: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x151238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x15123c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x15123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x151240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151240u;
    {
        const bool branch_taken_0x151240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151240u;
        // 0x151244: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151240) {
            ctx->pc = 0x151250u;
            return;
        }
    }
    ctx->pc = 0x151248u;
    // 0x151248: 0xc061920  jal         func_186480
    ctx->pc = 0x151248u;
    SET_GPR_U32(ctx, 31, 0x151250u);
    ctx->pc = 0x15124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151248u;
    // 0x15124c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x151248u, 0x151250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151250u;
}
