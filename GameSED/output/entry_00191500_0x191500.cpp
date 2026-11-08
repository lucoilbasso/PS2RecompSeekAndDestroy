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

// Function: entry_00191500
// Address: 0x191500 - 0x19157c
void entry_00191500_0x191500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191500_0x191500");
#endif

    switch (ctx->pc) {
        case 0x19150cu: goto label_19150c;
        default: break;
    }

    ctx->pc = 0x191500u;

    // 0x191500: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x191500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x191504: 0xc061258  jal         func_184960
    ctx->pc = 0x191504u;
    SET_GPR_U32(ctx, 31, 0x19150Cu);
    ctx->pc = 0x191508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191504u;
    // 0x191508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x191504u, 0x19150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19150Cu;
label_19150c:
    // 0x19150c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x19150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x191510: 0x240200a6  addiu       $v0, $zero, 0xA6
    ctx->pc = 0x191510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x191514: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x191514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x191518: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x191518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x19151c: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x19151cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x191520: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x191520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x191524: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x191524u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x191528: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x191528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19152c: 0x90c4ee68  lbu         $a0, -0x1198($a2)
    ctx->pc = 0x19152cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x21EE68u));
    // 0x191530: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x191530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x191534: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x191534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x191538: 0x8ca2d630  lw          $v0, -0x29D0($a1)
    ctx->pc = 0x191538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x19153c: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x19153cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x191540: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x191540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191544: 0x261001d0  addiu       $s0, $s0, 0x1D0
    ctx->pc = 0x191544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x191548: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x191548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19154c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x19154cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x191550: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x191550u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x191554: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x191554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191558: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x191558u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x19155c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191560: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x191560u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x191564: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x191564u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x191568: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x191568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x19156c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19156cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x191570: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x191570u;
    {
        const bool branch_taken_0x191570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x191574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191570u;
        // 0x191574: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191570) {
            ctx->pc = 0x19157Cu;
            return;
        }
    }
    ctx->pc = 0x191578u;
    // 0x191578: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x191578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x19157cu;
}
