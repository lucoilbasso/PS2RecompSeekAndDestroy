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

// Function: entry_0012aec4
// Address: 0x12aec4 - 0x12afb0
void entry_0012aec4_0x12aec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aec4_0x12aec4");
#endif

    ctx->pc = 0x12aec4u;

    // 0x12aec4: 0xafb000e8  sw          $s0, 0xE8($sp)
    ctx->pc = 0x12aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 16));
    // 0x12aec8: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x12aec8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x12aecc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x12aeccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x12aed0: 0x354a8005  ori         $t2, $t2, 0x8005
    ctx->pc = 0x12aed0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32773);
    // 0x12aed4: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x12aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x12aed8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x12aed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12aedc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12aee0: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x12aee0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x12aee4: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x12aee4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x12aee8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x12aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x12aeec: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x12aeecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12aef0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x12aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12aef4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x12aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12aef8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x12aefc: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x12aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x12af00: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x12af00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x12af04: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x12af04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12af08: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x12af08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x12af0c: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x12af0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12af10: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x12af10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x12af14: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x12af14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x12af18: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x12af18u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x12af1c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x12af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12af20: 0x24480030  addiu       $t0, $v0, 0x30
    ctx->pc = 0x12af20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12af24: 0x24490050  addiu       $t1, $v0, 0x50
    ctx->pc = 0x12af24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x12af28: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x12af28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x12af2c: 0x240b004e  addiu       $t3, $zero, 0x4E
    ctx->pc = 0x12af2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12af30: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x12af30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x12af34: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x12af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x12af38: 0xfd0b0008  sd          $t3, 0x8($t0)
    ctx->pc = 0x12af38u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
    // 0x12af3c: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x12af3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12af40: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x12af40u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x12af44: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x12af44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12af48: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x12af48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x12af4c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x12af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x12af50: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x12af50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x12af54: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12af54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12af58: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x12af58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x12af5c: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x12af5cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x12af60: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x12af60u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x12af64: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x12af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x12af68: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x12af68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12af6c: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x12af6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12af70: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x12af70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x12af74: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x12af74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x12af78: 0xfcec0008  sd          $t4, 0x8($a3)
    ctx->pc = 0x12af78u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 12));
    // 0x12af7c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x12af7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x12af80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x12af80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12af84: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x12af84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x12af88: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x12af88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x12af8c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12AF8Cu;
    {
        const bool branch_taken_0x12af8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF8Cu;
        // 0x12af90: 0xc6740024  lwc1        $f20, 0x24($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af8c) {
            ctx->pc = 0x12AFB0u;
            return;
        }
    }
    ctx->pc = 0x12AF94u;
    // 0x12af94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12af94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12af98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12af98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12af9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12afa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12afa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12afa4: 0x0  nop
    ctx->pc = 0x12afa4u;
    // NOP
    // 0x12afa8: 0x0  nop
    ctx->pc = 0x12afa8u;
    // NOP
    // 0x12afac: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x12afacu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    ctx->pc = 0x12afb0u;
}
