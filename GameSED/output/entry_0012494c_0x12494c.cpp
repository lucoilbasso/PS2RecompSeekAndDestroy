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

// Function: entry_0012494c
// Address: 0x12494c - 0x124a60
void entry_0012494c_0x12494c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012494c_0x12494c");
#endif

    ctx->pc = 0x12494cu;

    // 0x12494c: 0xafb000f4  sw          $s0, 0xF4($sp)
    ctx->pc = 0x12494cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 16));
    // 0x124950: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x124950u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x124954: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x124954u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x124958: 0x35298006  ori         $t1, $t1, 0x8006
    ctx->pc = 0x124958u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32774);
    // 0x12495c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x12495cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x124960: 0x3c0b0007  lui         $t3, 0x7
    ctx->pc = 0x124960u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)7 << 16));
    // 0x124964: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x124964u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x124968: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x124968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12496c: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x12496cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x124970: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x124970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x124974: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x124974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x124978: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x124978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12497c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x12497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x124980: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x124980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x124984: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x124984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x124988: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x124988u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x12498c: 0x24480030  addiu       $t0, $v0, 0x30
    ctx->pc = 0x12498cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x124990: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x124990u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x124994: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x124994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x124998: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x124998u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x12499c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x12499cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1249a0: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x1249a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x1249a4: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x1249a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1249a8: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x1249a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1249ac: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1249acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1249b0: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x1249b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x1249b4: 0x244c0050  addiu       $t4, $v0, 0x50
    ctx->pc = 0x1249b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1249b8: 0xfd0a0008  sd          $t2, 0x8($t0)
    ctx->pc = 0x1249b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x1249bc: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x1249bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1249c0: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1249c0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1249c4: 0x240e0060  addiu       $t6, $zero, 0x60
    ctx->pc = 0x1249c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1249c8: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1249c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1249cc: 0x244f0060  addiu       $t7, $v0, 0x60
    ctx->pc = 0x1249ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1249d0: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1249d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1249d4: 0x24550070  addiu       $s5, $v0, 0x70
    ctx->pc = 0x1249d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1249d8: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1249d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1249dc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1249dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249e0: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1249e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1249e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1249e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1249e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1249ec: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x1249ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x1249f0: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x1249f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x1249f4: 0x269e0120  addiu       $fp, $s4, 0x120
    ctx->pc = 0x1249f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x1249f8: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x1249f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x1249fc: 0xfd8b0008  sd          $t3, 0x8($t4)
    ctx->pc = 0x1249fcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 11));
    // 0x124a00: 0xfd8e0000  sd          $t6, 0x0($t4)
    ctx->pc = 0x124a00u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 14));
    // 0x124a04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x124a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x124a08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x124a0c: 0x8e8300d0  lw          $v1, 0xD0($s4)
    ctx->pc = 0x124a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x124a10: 0x8fb20100  lw          $s2, 0x100($sp)
    ctx->pc = 0x124a10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x124a14: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x124a14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
    // 0x124a18: 0x94650030  lhu         $a1, 0x30($v1)
    ctx->pc = 0x124a18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x124a1c: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x124a1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124a20: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x124a20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x124a24: 0xfdf00008  sd          $s0, 0x8($t7)
    ctx->pc = 0x124a24u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 16));
    // 0x124a28: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x124a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x124a2c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x124a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x124a30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x124a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124a34: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x124a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x124a38: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x124a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x124a3c: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x124a3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
    // 0x124a40: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x124a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x124a44: 0xfde40000  sd          $a0, 0x0($t7)
    ctx->pc = 0x124a44u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 4));
    // 0x124a48: 0x8e8201c8  lw          $v0, 0x1C8($s4)
    ctx->pc = 0x124a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x124a4c: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x124a4cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x124a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124a54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x124a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x124a58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124A58u;
    {
        const bool branch_taken_0x124a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124a58) {
            ctx->pc = 0x124A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124A58u;
            // 0x124a5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x124A60u;
            return;
        }
    }
    ctx->pc = 0x124A60u;
}
