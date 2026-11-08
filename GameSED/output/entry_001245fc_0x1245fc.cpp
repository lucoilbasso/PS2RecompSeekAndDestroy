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

// Function: entry_001245fc
// Address: 0x1245fc - 0x124678
void entry_001245fc_0x1245fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001245fc_0x1245fc");
#endif

    switch (ctx->pc) {
        case 0x124640u: goto label_124640;
        default: break;
    }

    ctx->pc = 0x1245fcu;

    // 0x1245fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1245fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x124600: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x124600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x124604: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x124604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124608: 0x0  nop
    ctx->pc = 0x124608u;
    // NOP
    // 0x12460c: 0x0  nop
    ctx->pc = 0x12460cu;
    // NOP
    // 0x124610: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x124610u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x124614: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x124614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124618: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x124618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12461c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x12461cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124620: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x124620u;
    {
        const bool branch_taken_0x124620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124620u;
        // 0x124624: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124620) {
            ctx->pc = 0x124680u;
            return;
        }
    }
    ctx->pc = 0x124628u;
    // 0x124628: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x124628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12462c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124630: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x124630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x124634: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x124634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x124638: 0xc047898  jal         func_11E260
    ctx->pc = 0x124638u;
    SET_GPR_U32(ctx, 31, 0x124640u);
    ctx->pc = 0x12463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124638u;
    // 0x12463c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x124638u, 0x124640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124640u;
label_124640:
    // 0x124640: 0x8e240108  lw          $a0, 0x108($s1)
    ctx->pc = 0x124640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x124644: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x124644u;
    {
        const bool branch_taken_0x124644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124644u;
        // 0x124648: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124644) {
            ctx->pc = 0x124678u;
            return;
        }
    }
    ctx->pc = 0x12464Cu;
    // 0x12464c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x12464cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124650: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x124650u;
    {
        const bool branch_taken_0x124650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124650u;
        // 0x124654: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124650) {
            ctx->pc = 0x12467Cu;
            return;
        }
    }
    ctx->pc = 0x124658u;
    // 0x124658: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x124658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x12465c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124660: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x124660u;
    {
        const bool branch_taken_0x124660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x124660) {
            ctx->pc = 0x124664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124660u;
            // 0x124664: 0xc6050008  lwc1        $f5, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x124684u;
            return;
        }
    }
    ctx->pc = 0x124668u;
    // 0x124668: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x124668u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x12466c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12466Cu;
    {
        const bool branch_taken_0x12466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12466Cu;
        // 0x124670: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12466c) {
            ctx->pc = 0x124680u;
            return;
        }
    }
    ctx->pc = 0x124674u;
    // 0x124674: 0x0  nop
    ctx->pc = 0x124674u;
    // NOP
    ctx->pc = 0x124678u;
}
