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

// Function: entry_0010df6c
// Address: 0x10df6c - 0x10dfe8
void entry_0010df6c_0x10df6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010df6c_0x10df6c");
#endif

    switch (ctx->pc) {
        case 0x10df8cu: goto label_10df8c;
        case 0x10dfbcu: goto label_10dfbc;
        case 0x10dfdcu: goto label_10dfdc;
        default: break;
    }

    ctx->pc = 0x10df6cu;

    // 0x10df6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10df70: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x10df74: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x10df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x10df78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10df7c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10df80: 0x8c520044  lw          $s2, 0x44($v0)
    ctx->pc = 0x10df80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10df84: 0xc04110c  jal         func_104430
    ctx->pc = 0x10DF84u;
    SET_GPR_U32(ctx, 31, 0x10DF8Cu);
    ctx->pc = 0x10DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF84u;
    // 0x10df88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10DF84u, 0x10DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF8Cu;
label_10df8c:
    // 0x10df8c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x10df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10df90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10df90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10df98: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x10df98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x10df9c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10dfa0: 0x38420946  xori        $v0, $v0, 0x946
    ctx->pc = 0x10dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2374);
    // 0x10dfa4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10DFA4u;
    {
        const bool branch_taken_0x10dfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFA4u;
        // 0x10dfa8: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfa4) {
            ctx->pc = 0x10DFE8u;
            return;
        }
    }
    ctx->pc = 0x10DFACu;
    // 0x10dfac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dfb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10dfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dfb4: 0xc04110c  jal         func_104430
    ctx->pc = 0x10DFB4u;
    SET_GPR_U32(ctx, 31, 0x10DFBCu);
    ctx->pc = 0x10DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFB4u;
    // 0x10dfb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10DFB4u, 0x10DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFBCu;
label_10dfbc:
    // 0x10dfbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10dfbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dfc0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x10dfc4: 0x2454f6e0  addiu       $s4, $v0, -0x920
    ctx->pc = 0x10dfc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964960));
    // 0x10dfc8: 0xfa800000  sqc2        $vf0, 0x0($s4)
    ctx->pc = 0x10dfc8u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x25F6E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x25F6E0u, _value); } while (0);
    // 0x10dfcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dfd0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10dfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dfd4: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10DFD4u;
    SET_GPR_U32(ctx, 31, 0x10DFDCu);
    ctx->pc = 0x10DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFD4u;
    // 0x10dfd8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10DFD4u, 0x10DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFDCu;
label_10dfdc:
    // 0x10dfdc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10DFDCu;
    {
        const bool branch_taken_0x10dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dfdc) {
            ctx->pc = 0x10E01Cu;
            return;
        }
    }
    ctx->pc = 0x10DFE4u;
    // 0x10dfe4: 0x0  nop
    ctx->pc = 0x10dfe4u;
    // NOP
    ctx->pc = 0x10dfe8u;
}
