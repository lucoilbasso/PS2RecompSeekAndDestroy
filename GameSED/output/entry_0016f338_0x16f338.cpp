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

// Function: entry_0016f338
// Address: 0x16f338 - 0x16f390
void entry_0016f338_0x16f338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f338_0x16f338");
#endif

    ctx->pc = 0x16f338u;

    // 0x16f338: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x16f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x16f33c: 0xffa601d0  sd          $a2, 0x1D0($sp)
    ctx->pc = 0x16f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 6));
    // 0x16f340: 0xffa701d8  sd          $a3, 0x1D8($sp)
    ctx->pc = 0x16f340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 7));
    // 0x16f344: 0xffa801e0  sd          $t0, 0x1E0($sp)
    ctx->pc = 0x16f344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 8));
    // 0x16f348: 0xffa901e8  sd          $t1, 0x1E8($sp)
    ctx->pc = 0x16f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 9));
    // 0x16f34c: 0xffaa01f0  sd          $t2, 0x1F0($sp)
    ctx->pc = 0x16f34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 10));
    // 0x16f350: 0xffab01f8  sd          $t3, 0x1F8($sp)
    ctx->pc = 0x16f350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 11));
    // 0x16f354: 0xe7ac01a8  swc1        $f12, 0x1A8($sp)
    ctx->pc = 0x16f354u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x16f358: 0xe7ad01ac  swc1        $f13, 0x1AC($sp)
    ctx->pc = 0x16f358u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x16f35c: 0xe7ae01b0  swc1        $f14, 0x1B0($sp)
    ctx->pc = 0x16f35cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x16f360: 0xe7af01b4  swc1        $f15, 0x1B4($sp)
    ctx->pc = 0x16f360u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x16f364: 0xe7b001b8  swc1        $f16, 0x1B8($sp)
    ctx->pc = 0x16f364u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x16f368: 0xe7b101bc  swc1        $f17, 0x1BC($sp)
    ctx->pc = 0x16f368u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x16f36c: 0xe7b201c0  swc1        $f18, 0x1C0($sp)
    ctx->pc = 0x16f36cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x16f370: 0xe7b301c4  swc1        $f19, 0x1C4($sp)
    ctx->pc = 0x16f370u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x16f374: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x16f374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16f378: 0x461000b  bgez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16F378u;
    {
        const bool branch_taken_0x16f378 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F378u;
        // 0x16f37c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f378) {
            ctx->pc = 0x16F3A8u;
            return;
        }
    }
    ctx->pc = 0x16F380u;
    // 0x16f380: 0x27a201c8  addiu       $v0, $sp, 0x1C8
    ctx->pc = 0x16f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x16f384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16f384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f388: 0xc066c26  jal         func_19B098
    ctx->pc = 0x16F388u;
    SET_GPR_U32(ctx, 31, 0x16F390u);
    ctx->pc = 0x16F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F388u;
    // 0x16f38c: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B098u, 0x16F388u, 0x16F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F390u;
}
