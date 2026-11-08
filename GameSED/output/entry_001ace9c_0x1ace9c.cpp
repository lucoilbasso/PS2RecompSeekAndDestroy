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

// Function: entry_001ace9c
// Address: 0x1ace9c - 0x1acfb8
void entry_001ace9c_0x1ace9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ace9c_0x1ace9c");
#endif

    ctx->pc = 0x1ace9cu;

    // 0x1ace9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ace9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1acea0: 0x34423900  ori         $v0, $v0, 0x3900
    ctx->pc = 0x1acea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14592);
    // 0x1acea4: 0x34633910  ori         $v1, $v1, 0x3910
    ctx->pc = 0x1acea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14608);
    // 0x1acea8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1acea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aceac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1aceacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1aceb0: 0x34843920  ori         $a0, $a0, 0x3920
    ctx->pc = 0x1aceb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14624);
    // 0x1aceb4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1aceb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1aceb8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x1aceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x1acebc: 0x34c63930  ori         $a2, $a2, 0x3930
    ctx->pc = 0x1acebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14640);
    // 0x1acec0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1acec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1acec4: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x1acec4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x1acec8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1acec8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10003910u));
    // 0x1acecc: 0x34a53940  ori         $a1, $a1, 0x3940
    ctx->pc = 0x1aceccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14656);
    // 0x1aced0: 0x35ef3950  ori         $t7, $t7, 0x3950
    ctx->pc = 0x1aced0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)14672);
    // 0x1aced4: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x1aced4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x1aced8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1aced8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1acedc: 0x36103960  ori         $s0, $s0, 0x3960
    ctx->pc = 0x1acedcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)14688);
    // 0x1acee0: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x1acee0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x1acee4: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x1acee4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x1acee8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1acee8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10003920u));
    // 0x1aceec: 0x35ce3970  ori         $t6, $t6, 0x3970
    ctx->pc = 0x1aceecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)14704);
    // 0x1acef0: 0x36313870  ori         $s1, $s1, 0x3870
    ctx->pc = 0x1acef0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)14448);
    // 0x1acef4: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x1acef4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x1acef8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1acef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1acefc: 0x358c3880  ori         $t4, $t4, 0x3880
    ctx->pc = 0x1acefcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)14464);
    // 0x1acf00: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x1acf00u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x1acf04: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x1acf04u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x1acf08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1acf08u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10003930u));
    // 0x1acf0c: 0x356b3800  ori         $t3, $t3, 0x3800
    ctx->pc = 0x1acf0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)14336);
    // 0x1acf10: 0x35ad38d0  ori         $t5, $t5, 0x38D0
    ctx->pc = 0x1acf10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)14544);
    // 0x1acf14: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1acf14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1acf18: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1acf18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1acf1c: 0x34c63890  ori         $a2, $a2, 0x3890
    ctx->pc = 0x1acf1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14480);
    // 0x1acf20: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1acf20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1acf24: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x1acf24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x1acf28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10003940u));
    // 0x1acf2c: 0x34e73830  ori         $a3, $a3, 0x3830
    ctx->pc = 0x1acf2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)14384);
    // 0x1acf30: 0x35293860  ori         $t1, $t1, 0x3860
    ctx->pc = 0x1acf30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)14432);
    // 0x1acf34: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1acf34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1acf38: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x1acf38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x1acf3c: 0x35083820  ori         $t0, $t0, 0x3820
    ctx->pc = 0x1acf3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)14368);
    // 0x1acf40: 0x149202  srl         $s2, $s4, 8
    ctx->pc = 0x1acf40u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
    // 0x1acf44: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x1acf44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x1acf48: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x1acf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1acf4c: 0x354a3850  ori         $t2, $t2, 0x3850
    ctx->pc = 0x1acf4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)14416);
    // 0x1acf50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acf54: 0xae640014  sw          $a0, 0x14($s3)
    ctx->pc = 0x1acf54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
    // 0x1acf58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1acf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acf5c: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x1acf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x1acf60: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x1acf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1acf64: 0xae64001c  sw          $a0, 0x1C($s3)
    ctx->pc = 0x1acf64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 4));
    // 0x1acf68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1acf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1acf6c: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x1acf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
    // 0x1acf70: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1acf74: 0xae640024  sw          $a0, 0x24($s3)
    ctx->pc = 0x1acf74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 4));
    // 0x1acf78: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1acf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1acf7c: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x1acf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1acf80: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x1acf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1acf84: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1acf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1acf88: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1acf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1acf8c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x1acf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1acf90: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1acf90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1acf94: 0xa663002e  sh          $v1, 0x2E($s3)
    ctx->pc = 0x1acf94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acf98: 0xa664002c  sh          $a0, 0x2C($s3)
    ctx->pc = 0x1acf98u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x1acf9c: 0xa6650030  sh          $a1, 0x30($s3)
    ctx->pc = 0x1acf9cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x1acfa0: 0xa6660032  sh          $a2, 0x32($s3)
    ctx->pc = 0x1acfa0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 50), (uint16_t)GPR_U32(ctx, 6));
    // 0x1acfa4: 0xa2670034  sb          $a3, 0x34($s3)
    ctx->pc = 0x1acfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 52), (uint8_t)GPR_U32(ctx, 7));
    // 0x1acfa8: 0xa2740035  sb          $s4, 0x35($s3)
    ctx->pc = 0x1acfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 20));
    // 0x1acfac: 0xa2720036  sb          $s2, 0x36($s3)
    ctx->pc = 0x1acfacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 54), (uint8_t)GPR_U32(ctx, 18));
    // 0x1acfb0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1acfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003850u));
    // 0x1acfb4: 0xa2630037  sb          $v1, 0x37($s3)
    ctx->pc = 0x1acfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1acfb8u;
}
